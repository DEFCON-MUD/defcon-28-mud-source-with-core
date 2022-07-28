inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 10, 7 }));
  set_short( "Passage - x41y10z7" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y10z7.c",
  "east" : DIR+"/rooms/x42y10z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
