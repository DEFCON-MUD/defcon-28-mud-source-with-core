inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 2, 5 }));
  set_short( "Corridor - x31y2z5" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y2z5.c",
  "east" : DIR+"/rooms/x32y2z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
