inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 16, 7 }));
  set_short( "Hallway - x48y16z7" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y16z7.c",
  "east" : DIR+"/rooms/x49y16z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
