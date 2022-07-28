inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 4, 9 }));
  set_short( "Hallway - x40y4z9" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y4z9.c",
  "east" : DIR+"/rooms/x41y4z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
