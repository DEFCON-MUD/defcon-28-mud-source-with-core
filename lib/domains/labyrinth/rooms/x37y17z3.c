inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 17, 3 }));
  set_short( "Passage - x37y17z3" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y18z3.c",
  "south" : DIR+"/rooms/x37y16z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
