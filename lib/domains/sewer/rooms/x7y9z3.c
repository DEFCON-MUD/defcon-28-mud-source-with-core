inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 9, 3 }));
  set_short( "Hallway - x7y9z3" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y10z3.c",
  "south" : DIR+"/rooms/x7y8z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
