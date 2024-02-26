inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 26, 7 }));
  set_short( "Corridor - x14y26z7" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y26z7.c",
  "east" : DIR+"/rooms/x15y26z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
