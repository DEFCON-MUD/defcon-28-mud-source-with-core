inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 64, 5 }));
  set_short( "Passage - x19y64z5" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y64z5.c",
  "east" : DIR+"/rooms/x20y64z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
