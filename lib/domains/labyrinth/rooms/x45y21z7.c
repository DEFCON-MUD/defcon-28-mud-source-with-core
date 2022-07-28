inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 21, 7 }));
  set_short( "Hallway - x45y21z7" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y22z7.c",
  "south" : DIR+"/rooms/x45y20z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
