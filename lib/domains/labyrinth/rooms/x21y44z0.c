inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 44, 0 }));
  set_short( "Hallway - x21y44z0" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y44z0.c",
  "south" : DIR+"/rooms/x21y43z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
