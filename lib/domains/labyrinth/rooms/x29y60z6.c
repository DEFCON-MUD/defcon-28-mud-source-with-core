inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 60, 6 }));
  set_short( "Hallway - x29y60z6" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y60z6.c",
  "north" : DIR+"/rooms/x29y61z6.c",
  "south" : DIR+"/rooms/x29y59z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
