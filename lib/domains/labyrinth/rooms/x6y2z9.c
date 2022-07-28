inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 2, 9 }));
  set_short( "Corridor - x6y2z9" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y2z9.c",
  "east" : DIR+"/rooms/x7y2z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
