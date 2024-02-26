inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 48, 0 }));
  set_short( "Hallway - x14y48z0" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y48z0.c",
  "east" : DIR+"/rooms/x15y48z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
