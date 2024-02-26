inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 60, 7 }));
  set_short( "Corridor - x22y60z7" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y60z7.c",
  "east" : DIR+"/rooms/x23y60z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
