inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 4, 9 }));
  set_short( "Corridor - x53y4z9" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y4z9.c",
  "east" : DIR+"/rooms/x54y4z9.c",
  "south" : DIR+"/rooms/x53y3z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
