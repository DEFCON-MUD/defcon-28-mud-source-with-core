inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 58, 9 }));
  set_short( "Passage - x27y58z9" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y58z9.c",
  "east" : DIR+"/rooms/x28y58z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
