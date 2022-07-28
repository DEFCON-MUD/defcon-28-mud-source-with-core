inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 3, 1 }));
  set_short( "Passage - x17y3z1" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y4z1.c",
  "south" : DIR+"/rooms/x17y2z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
