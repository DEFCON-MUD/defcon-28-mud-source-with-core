inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 41, 7 }));
  set_short( "Corridor - x3y41z7" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y42z7.c",
  "south" : DIR+"/rooms/x3y40z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
