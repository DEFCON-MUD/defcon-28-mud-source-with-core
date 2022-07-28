inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 30, 9 }));
  set_short( "Corridor - x13y30z9" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y30z9.c",
  "east" : DIR+"/rooms/x14y30z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
