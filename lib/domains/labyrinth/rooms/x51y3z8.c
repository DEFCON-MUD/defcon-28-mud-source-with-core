inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 3, 8 }));
  set_short( "Corridor - x51y3z8" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y4z8.c",
  "south" : DIR+"/rooms/x51y2z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
