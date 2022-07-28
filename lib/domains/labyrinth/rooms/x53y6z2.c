inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 6, 2 }));
  set_short( "Passage - x53y6z2" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y6z2.c",
  "south" : DIR+"/rooms/x53y5z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
