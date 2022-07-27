inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 9, 8 }));
  set_short( "Passage - x51y9z8" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y10z8.c",
  "south" : DIR+"/rooms/x51y8z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
