inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 52, 5 }));
  set_short( "Corridor - x16y52z5" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y52z5.c",
  "east" : DIR+"/rooms/x17y52z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
