inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 62, 7 }));
  set_short( "Hallway - x55y62z7" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y62z7.c",
  "east" : DIR+"/rooms/x56y62z7.c",
  "south" : DIR+"/rooms/x55y61z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
