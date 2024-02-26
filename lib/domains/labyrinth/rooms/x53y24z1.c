inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 24, 1 }));
  set_short( "Hallway - x53y24z1" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y25z1.c",
  "south" : DIR+"/rooms/x53y23z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
