inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 45, 3 }));
  set_short( "Corridor - x21y45z3" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y46z3.c",
  "south" : DIR+"/rooms/x21y44z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
