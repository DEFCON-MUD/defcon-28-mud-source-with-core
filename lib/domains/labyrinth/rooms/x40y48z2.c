inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 48, 2 }));
  set_short( "Passage - x40y48z2" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y48z2.c",
  "east" : DIR+"/rooms/x41y48z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
