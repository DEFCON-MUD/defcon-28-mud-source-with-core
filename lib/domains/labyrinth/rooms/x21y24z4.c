inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 24, 4 }));
  set_short( "Hallway - x21y24z4" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y24z4.c",
  "north" : DIR+"/rooms/x21y25z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
