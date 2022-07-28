inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 64, 6 }));
  set_short( "Hallway - x12y64z6" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y64z6.c",
  "east" : DIR+"/rooms/x13y64z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
