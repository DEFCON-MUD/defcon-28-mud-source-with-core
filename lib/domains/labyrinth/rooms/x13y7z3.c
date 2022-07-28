inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 7, 3 }));
  set_short( "Passage - x13y7z3" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y8z3.c",
  "south" : DIR+"/rooms/x13y6z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
