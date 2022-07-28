inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 55, 4 }));
  set_short( "Corridor - x41y55z4" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y56z4.c",
  "south" : DIR+"/rooms/x41y54z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
