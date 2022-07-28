inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 44, 5 }));
  set_short( "Hallway - x60y44z5" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y44z5.c",
  "east" : DIR+"/rooms/x61y44z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
