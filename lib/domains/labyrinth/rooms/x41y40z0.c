inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 40, 0 }));
  set_short( "Hallway - x41y40z0" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y40z0.c",
  "south" : DIR+"/rooms/x41y39z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
