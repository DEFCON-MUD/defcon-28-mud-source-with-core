inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 36, 9 }));
  set_short( "Corridor - x44y36z9" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y36z9.c",
  "east" : DIR+"/rooms/x45y36z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
