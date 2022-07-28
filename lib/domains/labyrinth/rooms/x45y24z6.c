inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 24, 6 }));
  set_short( "Corridor - x45y24z6" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y24z6.c",
  "north" : DIR+"/rooms/x45y25z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
