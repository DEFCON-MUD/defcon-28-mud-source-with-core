inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 64, 7 }));
  set_short( "Hallway - x42y64z7" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y64z7.c",
  "east" : DIR+"/rooms/x43y64z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
