inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 49, 6 }));
  set_short( "Hallway - x17y49z6" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y50z6.c",
  "south" : DIR+"/rooms/x17y48z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
