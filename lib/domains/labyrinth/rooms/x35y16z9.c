inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 16, 9 }));
  set_short( "Passage - x35y16z9" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y16z9.c",
  "north" : DIR+"/rooms/x35y17z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
