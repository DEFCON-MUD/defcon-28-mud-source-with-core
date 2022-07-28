inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 36, 6 }));
  set_short( "Corridor - x30y36z6" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y36z6.c",
  "east" : DIR+"/rooms/x31y36z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
