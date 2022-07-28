inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 6, 7 }));
  set_short( "Passage - x5y6z7" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y7z7.c",
  "south" : DIR+"/rooms/x5y5z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
