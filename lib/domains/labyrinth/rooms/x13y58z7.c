inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 58, 7 }));
  set_short( "Corridor - x13y58z7" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y58z7.c",
  "east" : DIR+"/rooms/x14y58z7.c",
  "north" : DIR+"/rooms/x13y59z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
