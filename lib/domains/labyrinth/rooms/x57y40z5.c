inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 40, 5 }));
  set_short( "Corridor - x57y40z5" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y40z5.c",
  "north" : DIR+"/rooms/x57y41z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
