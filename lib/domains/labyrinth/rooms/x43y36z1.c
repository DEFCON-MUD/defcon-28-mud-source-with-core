inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 36, 1 }));
  set_short( "Passage - x43y36z1" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y36z1.c",
  "south" : DIR+"/rooms/x43y35z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
