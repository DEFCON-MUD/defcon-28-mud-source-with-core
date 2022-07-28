inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 36, 0 }));
  set_short( "Hallway - x20y36z0" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y36z0.c",
  "east" : DIR+"/rooms/x21y36z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
