inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 16, 7 }));
  set_short( "Hallway - x53y16z7" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y17z7.c",
  "south" : DIR+"/rooms/x53y15z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
