inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 18, 9 }));
  set_short( "Hallway - x19y18z9" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y19z9.c",
  "south" : DIR+"/rooms/x19y17z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
