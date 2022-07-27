inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 31, 7 }));
  set_short( "Hallway - x61y31z7" );
set_objects( DIR+"/monsters/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y32z7.c",
  "south" : DIR+"/rooms/x61y30z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
