inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 17, 6 }));
  set_short( "Hallway - x23y17z6" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y18z6.c",
  "south" : DIR+"/rooms/x23y16z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
