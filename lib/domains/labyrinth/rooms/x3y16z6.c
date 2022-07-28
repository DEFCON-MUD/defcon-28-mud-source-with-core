inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 16, 6 }));
  set_short( "Hallway - x3y16z6" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y16z6.c",
  "south" : DIR+"/rooms/x3y15z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
