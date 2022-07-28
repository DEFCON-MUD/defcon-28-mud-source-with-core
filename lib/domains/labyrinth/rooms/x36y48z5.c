inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 48, 5 }));
  set_short( "Corridor - x36y48z5" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y48z5.c",
  "east" : DIR+"/rooms/x37y48z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
