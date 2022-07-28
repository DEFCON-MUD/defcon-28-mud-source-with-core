inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 34, 6 }));
  set_short( "Corridor - x22y34z6" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y34z6.c",
  "east" : DIR+"/rooms/x23y34z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
