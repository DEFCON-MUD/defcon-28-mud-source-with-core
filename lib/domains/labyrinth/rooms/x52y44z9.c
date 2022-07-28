inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 44, 9 }));
  set_short( "Passage - x52y44z9" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y44z9.c",
  "east" : DIR+"/rooms/x53y44z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crappy sales material in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
