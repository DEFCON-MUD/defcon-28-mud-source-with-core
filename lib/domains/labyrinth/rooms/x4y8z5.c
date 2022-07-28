inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 8, 5 }));
  set_short( "Corridor - x4y8z5" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y8z5.c",
  "east" : DIR+"/rooms/x5y8z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
