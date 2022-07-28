inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 53, 6 }));
  set_short( "Hallway - x59y53z6" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y54z6.c",
  "south" : DIR+"/rooms/x59y52z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
