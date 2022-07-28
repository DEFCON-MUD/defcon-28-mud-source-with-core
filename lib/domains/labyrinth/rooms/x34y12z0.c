inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 12, 0 }));
  set_short( "Passage - x34y12z0" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y12z0.c",
  "east" : DIR+"/rooms/x35y12z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
